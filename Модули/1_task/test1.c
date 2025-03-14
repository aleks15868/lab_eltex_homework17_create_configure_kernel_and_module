#include <linux/module.h>
#include <linux/kernel.h>

int init_module(void)
{
	pr_info("1)Module loaded\n");
	return 0;

}

void cleanup_module(void)
{
	pr_info("2)Module unloaded\n");
}

MODULE_LICENSE("GPL");
