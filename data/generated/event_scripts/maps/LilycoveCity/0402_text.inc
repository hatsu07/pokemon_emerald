	@ data/maps/LilycoveCity/scripts.inc:603 LilycoveCity_Text_TeamAquaBeenTrainingWailmer
	.globl gText_Rom_1E0F11
gText_Rom_1E0F11: @ 0x081E0F11
	.string "アクアだんの れんちゅうが\nいりえで ホエルコを\lトレーニング してるんだよ!\pおいらたち ふなのり\nこのままじゃ うみに でられないよ!{EOS}"
	.if (. - gText_Rom_1E0F11) > 0x46
	.error "gText_Rom_1E0F11 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E0F11) < 0x46
	.space 0x46 - (. - gText_Rom_1E0F11)
	.endif
