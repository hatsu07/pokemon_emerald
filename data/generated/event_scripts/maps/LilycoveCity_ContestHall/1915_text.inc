	@ data/maps/LilycoveCity_ContestHall/scripts.inc:325 LilycoveCity_ContestHall_Text_GiveItBestSmartAppeal
	.globl gText_Rom_207BBB
gText_Rom_207BBB: @ 0x08207BBB
	.string "しかい『はあい かしこい ポケモンと\nそして トレーナーの みなさーん！\lがんばってくださーーい！\lレッツ！ アピール！！{EOS}"
	.if (. - gText_Rom_207BBB) > 0x3e
	.error "gText_Rom_207BBB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_207BBB) < 0x3e
	.space 0x3e - (. - gText_Rom_207BBB)
	.endif
