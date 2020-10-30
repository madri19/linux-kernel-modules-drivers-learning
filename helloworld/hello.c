#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Juan");
MODULE_DESCRIPTION("Hello World Module for the Kernel");
MODULE_VERSION("0.1"); 

static int __init hello_start(void)
{
  printk(KERN_INFO "Hello World Module!\n"); 
  return 0; 
}

static void __exit hello_end(void)
{
  printk(KERN_INFO "Goodbye!\n"); 
}

module_init(hello_start); 
module_exit(hello_end); 
