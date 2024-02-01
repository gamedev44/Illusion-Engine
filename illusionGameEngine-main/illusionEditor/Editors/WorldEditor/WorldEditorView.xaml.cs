using illusionEditor.GameProject;
using System;
using System.Collections.Generic;
using System.Collections.Specialized;
using System.Text;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Imaging;
using System.Windows.Navigation;
using System.Windows.Shapes;

namespace illusionEditor.Editors
{
    /// <summary>
    /// Interaction logic for WorldEditorView.xaml
    /// </summary>
    public partial class WorldEditorView : UserControl
    {
        public WorldEditorView()
        {
            InitializeComponent();
            Loaded += OnWorldEditorViewLoaded;
        }
        private void OnWorldEditorViewLoaded(object sender, RoutedEventArgs e)
        {
            Loaded -= OnWorldEditorViewLoaded;
            Focus();
            ((INotifyCollectionChanged)Project.UndoRedo.UndoList).CollectionChanged += (s, e) => Focus();
        }

        private bool CanExecuteUndo(object parameter) => true; // Implement your logic
        private void ExecuteUndo(object parameter) { /* Your undo logic */ }

        private bool CanExecuteRedo(object parameter) => true; // Implement your logic
        private void ExecuteRedo(object parameter) { /* Your redo logic */ }

        private bool CanExecuteSave(object parameter) => true; // Implement your logic
        private void ExecuteSave(object parameter) { /* Your save logic */ }

        private void ExecuteToggleDarkMode(object parameter)
        {
            var lightThemeUri = new Uri("LightTheme.xaml", UriKind.Relative);
            var darkThemeUri = new Uri("DarkTheme.xaml", UriKind.Relative);

            // Check the current theme and swap it
            var currentThemeUri = (Application.Current.Resources.MergedDictionaries.Count > 0)
                ? Application.Current.Resources.MergedDictionaries[0].Source
                : null;

            Application.Current.Resources.MergedDictionaries.Clear(); // Clear previous dictionaries

            if (currentThemeUri != null && currentThemeUri.OriginalString == lightThemeUri.OriginalString)
            {
                // If the current theme is light, switch to dark
                Application.Current.Resources.MergedDictionaries.Add(new ResourceDictionary { Source = darkThemeUri });
            }
            else
            {
                // If the current theme is dark or not set, switch to light
                Application.Current.Resources.MergedDictionaries.Add(new ResourceDictionary { Source = lightThemeUri });
            }
        }
    }
}
