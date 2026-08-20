	@ data/text/trainers.inc:2954 Route127_Text_KojiRegister
	.globl gText_Rom_2610BC
gText_Rom_2610BC: @ 0x082610BC
	.string "おれに かったり するやつは こうだーっ!\nまた よろしくおねがいします!{EOS}"
	.if (. - gText_Rom_2610BC) > 0x26
	.error "gText_Rom_2610BC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2610BC) < 0x26
	.space 0x26 - (. - gText_Rom_2610BC)
	.endif
