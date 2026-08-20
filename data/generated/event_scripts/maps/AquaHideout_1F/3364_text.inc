	@ data/maps/AquaHideout_1F/scripts.inc:53 AquaHideout_1F_Text_OurBossIsSnatchingSomething
	.globl gText_Rom_2179BF
gText_Rom_2179BF: @ 0x082179BF
	.string "なんだ なんだ!\nおれたち アクアだんに なんの ようだ!\pリーダーだったら いま だいじな ものを\nぶんどりに でかけていて るすだぞ!\p……どこに いったのか だって?\pわはははっ! そんな だいじな ことを\nおしえられる わけ ないだろうが!{EOS}"
	.if (. - gText_Rom_2179BF) > 0x7d
	.error "gText_Rom_2179BF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2179BF) < 0x7d
	.space 0x7d - (. - gText_Rom_2179BF)
	.endif
