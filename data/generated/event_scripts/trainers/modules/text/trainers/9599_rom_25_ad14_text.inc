	@ data/text/trainers.inc:551 Route108_Text_CoryRegister
	.globl gText_Rom_25AD14
gText_Rom_25AD14: @ 0x0825AD14
	.string "つよい トレーナーも だいすきだー!\nポケナビの とうろくを してくれー!{EOS}"
	.if (. - gText_Rom_25AD14) > 0x26
	.error "gText_Rom_25AD14 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25AD14) < 0x26
	.space 0x26 - (. - gText_Rom_25AD14)
	.endif
