	@ src/data/script_menu.h:550 script_menu_line_550
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CAD3B
gText_Rom_5CAD3B: @ 0x085CAD3B
	.string "スーパーランク$"
	.if (. - gText_Rom_5CAD3B) != 0x8
	.error "gText_Rom_5CAD3B must retain its original byte length"
	.endif
