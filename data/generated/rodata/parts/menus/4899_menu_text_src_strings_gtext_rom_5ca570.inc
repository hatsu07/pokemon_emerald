	@ src/strings.c:405 gText_XNatureMetSomewhereAt
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CA570
gText_Rom_5CA570: @ 0x085CA570
	.string "{DYNAMIC 0}{DYNAMIC 2}{DYNAMIC 1}{DYNAMIC 5}せいかく {LV_2}{DYNAMIC 0}{DYNAMIC 3}{DYNAMIC 1}のとき\nどこかで であった$"
	.if (. - gText_Rom_5CA570) != 0x23
	.error "gText_Rom_5CA570 must retain its original byte length"
	.endif
