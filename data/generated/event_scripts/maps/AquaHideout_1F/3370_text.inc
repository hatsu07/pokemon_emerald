	@ data/maps/AquaHideout_1F/scripts.inc:62 AquaHideout_1F_Text_BossIsOnRoute122
	.globl gText_Rom_217B19
gText_Rom_217B19: @ 0x08217B19
	.string "なんだ なんだ!\nおれたち アクアだんに なんの ようだ!\pリーダーは いま 122ばん すいどうの\nおくりびやまに むかっていて るすだぞ!\p……なにしに いったのか だって?\pわはははっ! そんな だいじな ことを\nおしえられる わけ ないだろうが!{EOS}"
	.if (. - gText_Rom_217B19) > 0x80
	.error "gText_Rom_217B19 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_217B19) < 0x80
	.space 0x80 - (. - gText_Rom_217B19)
	.endif
