#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};



static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xd710adbf, "__kmalloc_noprof" },
	{ 0xa53f4e29, "memcpy" },
	{ 0xcb8b6ec6, "kfree" },
	{ 0xd272d446, "__fentry__" },
	{ 0xe8213e80, "_printk" },
	{ 0xbd03ed67, "__ref_stack_chk_guard" },
	{ 0xd272d446, "__stack_chk_fail" },
	{ 0x27683a56, "memset" },
	{ 0xd272d446, "__x86_return_thunk" },
	{ 0x00bc5fb3, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0xd710adbf,
	0xa53f4e29,
	0xcb8b6ec6,
	0xd272d446,
	0xe8213e80,
	0xbd03ed67,
	0xd272d446,
	0x27683a56,
	0xd272d446,
	0x00bc5fb3,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"__kmalloc_noprof\0"
	"memcpy\0"
	"kfree\0"
	"__fentry__\0"
	"_printk\0"
	"__ref_stack_chk_guard\0"
	"__stack_chk_fail\0"
	"memset\0"
	"__x86_return_thunk\0"
	"module_layout\0"
;

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "B57F6C8D6279CA1E14053D5");
