[Description]

The first argument should contain the program's title.

The second argument must include explanation 1.

The third argument should include explanation 2.

The fourth argument must include the file path of the program's icon.

The fifth argument must include the contents of option 1. (If it doesn't exist, don't use it)

The sixth argument must include the contents of option 2. (If it doesn't exist, don't use it)

The seventh argument must include the contents of option 3. (If it doesn't exist, don't use it)

Use the program path from Option 1 in the eighth argument (including the program name)

Use the program path from Option 2 for the ninth argument (including the program name)

Use the program path from Option 3 for the tenth argument (including the program name)

In the eleventh argument, the -NoTemp argument can be used optionally. When used, the installer will not be deleted automatically once the installation is complete[For Developers Only]

Use InstallerControl.dll to change the percentage. Use (SendInstallerProgress(int progress);)