#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x135dd1a3, __VMLINUX_SYMBOL_STR(module_layout) },
	{        0, __VMLINUX_SYMBOL_STR(sys_close) },
	{ 0x1e6d26a8, __VMLINUX_SYMBOL_STR(strstr) },
	{ 0xb6ed1e53, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x4189195, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x50eedeb8, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x4c0550b, __VMLINUX_SYMBOL_STR(pv_cpu_ops) },
	{ 0xb4390f9a, __VMLINUX_SYMBOL_STR(mcount) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "A2002A17F3E00D34E81FF4D");
