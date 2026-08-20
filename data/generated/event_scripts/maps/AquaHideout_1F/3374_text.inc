	@ data/maps/AquaHideout_1F/scripts.inc:68 AquaHideout_1F_Text_BossIsInSlateportCity
	.globl gText_Rom_217BF9
gText_Rom_217BF9: @ 0x08217BF9
	.string "なんだ なんだ!\nおれたち アクアだんに なんの ようだ!\pリーダーは いま カイナシティに\nむかっていて るすだぞ!\p……なにしに いったのか だって?\pわはははっ! そんな だいじな ことを\nおしえられる わけ ないだろうが!{EOS}"
	.if (. - gText_Rom_217BF9) > 0x74
	.error "gText_Rom_217BF9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_217BF9) < 0x74
	.space 0x74 - (. - gText_Rom_217BF9)
	.endif
