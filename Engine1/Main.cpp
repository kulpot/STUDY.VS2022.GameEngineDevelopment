

//---------------------- Initial Folder Setup ------------------------
//ref link:https://www.youtube.com/watch?v=pNsqHoE49eg

/*
* --------------setting up TortoiseSVN---------------------------
* //ref link:https://www.youtube.com/watch?v=osnP8MGO0PQ&list=PLV7gcRAhaSFvaFsCa9-7B67XzKuzuFHtT&index=1
*
* It's very important to prepare TortoiseSVN BEFORE creating any of the Visual Studio projects, otherwise it will probably be a nightmare (or at least it was for me).

1) After installing TortoiseSVN, create a repository folder. This has to be an empty folder. I think this folder will store all of the data for different versions of your project.
2) Right click and "SVN Checkout" the folder you plan on saving your Visual Studio project files in. In this video, Jamie uses D:\MyEngine\ProjectFiles. The "URL of repository" is the file that you made in step 1, and the Checkout Directory should be the folder you are trying to Checkout. The format for the URL of repository is "file:///" and then the file path, i.e. "file:///C:/MyEngine/MyRepository/". Note the 3 slashes after "file:".
*
* I thought there would be more steps, but uh.. after you do these two things, everything should function properly as it does in this video (ability to Add.. and Commit) once you're created the project files.
*
* ---------------Other Isues----------------------
*
* I downloaded and installed the Tortoise SVN but I don't appear to have the Add.. option like you do, all the other options are there though. Any ideas?
*
* "Add" only shows up if you already have a repository. There are a couple ways to fix this. The easiest is to choose "Checkout" instead, drop the URL to your repo, then let that run. Then you will get the "Add" option.
*
*/

//->ConfigProperties->IntermediateDirectory->$(Configuration)\Tmp\

//--------------------- Making a Sandbox Game --------------------
//ref link:https://www.youtube.com/watch?v=_5JLA2-_0JM

void main()
{

}