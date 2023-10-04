#include <Model.h>
#include <View.h>
#include <Controller.h>
#include <iostream>
#include <unistd.h>
#include <stdio.h>

int core(int size, int speed)
{
	Model model = Model(size);
	View view = View(size);
	Controller controller(model, view);
	controller.updateView();
	while(true)
	{
		usleep(speed * 10000);
		if (controller.updateModel() != -1)
		{
			controller.exit();
			return 0;
		}
		controller.updateView();
	}
	return 0;
}