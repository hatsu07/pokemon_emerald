	@ data/text/trainers.inc:1541 Route115_Text_AlixIntro (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_25D550
gText_Rom_25D550: @ 0x0825D550
	.string "めが あったからには にがさないわよ!{EOS}"
	.if (. - gText_Rom_25D550) != 0x14
	.error "gText_Rom_25D550 must retain its original byte length"
	.endif
