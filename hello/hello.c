/*
 * a kernel module demo: hello
 *
 * Copyright (C) 2022 domafeso
 *
 * Licensed under GPLv2 or later
 */

#include <linux/init.h>
#include <linux/module.h>

static int __init hello_init(void)
{
    printk(KERN_INFO "hello kernel module\n");
    return 0;
}
module_init(hello_init);

static void __exit hello_exit(void)
{
    printk(KERN_INFO "bye kernel module\n");
}
module_exit(hello_exit);

MODULE_AUTHOR("domafeso");
MODULE_LICENSE("GPLv2");
MODULE_DESCRIPTION("A kernel module demo");

