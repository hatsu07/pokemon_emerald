	@ data/maps/MtPyre_2F/scripts.inc:123 MtPyre_2F_Text_ZanderIntro (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2165A3
gText_Rom_2165A3: @ 0x082165A3
	.string "ぎっ ぎゃああああっ!\nでたあああっ!{EOS}"
	.if (. - gText_Rom_2165A3) != 0x14
	.error "gText_Rom_2165A3 must retain its original byte length"
	.endif
