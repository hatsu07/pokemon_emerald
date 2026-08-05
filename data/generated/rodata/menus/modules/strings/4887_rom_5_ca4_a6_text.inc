	@ src/strings.c:399 gText_XNatureMetAtYZ
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CA4A6
gText_Rom_5CA4A6: @ 0x085CA4A6
	.string "{DYNAMIC 0}{DYNAMIC 2}{DYNAMIC 1}{DYNAMIC 5}せいかく {LV_2}{DYNAMIC 0}{DYNAMIC 3}{DYNAMIC 1}のとき\n{DYNAMIC 0}{DYNAMIC 4}{DYNAMIC 1}で であった$"
	.if (. - gText_Rom_5CA4A6) != 0x26
	.error "gText_Rom_5CA4A6 must retain its original byte length"
	.endif
