#include "Main_Thread.h"



Main_Thread::Main_Thread(bool run, int width, int height)
{
	cout << "Hello, World!" << endl;
	Run = run;
	MainView = new View(width, height);

	//check for fps limit

	while (Run) {
		//
		//run physics
		//calculate rays
		//display to screen


		/*FILE * fp = fopen("file.bmp", "wb");
		fwrite(bmpfile_header, sizeof(bmpfile_header), 1, fp);
		fwrite(bmp_dib_v3_header, sizeof(bmp_dib_v3_header_t), 1, fp);

		for (int i = 0; i < 200; i++) {
			for (int j = 0; j < 200; j++) {
				fwrite(&image[j][i][2], 1, 1, fp);
				fwrite(&image[j][i][1], 1, 1, fp);
				fwrite(&image[j][i][0], 1, 1, fp);
			}
		}

		fclose(fp);*/

	}

}

Main_Thread::~Main_Thread()
{
}
