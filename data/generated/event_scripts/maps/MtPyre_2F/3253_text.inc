	@ data/maps/MtPyre_2F/scripts.inc:127 MtPyre_2F_Text_ZanderDefeat (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2165B7
gText_Rom_2165B7: @ 0x082165B7
	.string "ま まけたああああっ!{EOS}"
	.if (. - gText_Rom_2165B7) != 0xc
	.error "gText_Rom_2165B7 must retain its original byte length"
	.endif
