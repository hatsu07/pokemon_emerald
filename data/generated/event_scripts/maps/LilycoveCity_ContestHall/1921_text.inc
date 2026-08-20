	@ data/maps/LilycoveCity_ContestHall/scripts.inc:334 LilycoveCity_ContestHall_Text_RaisedMonToBeSmart
	.globl gText_Rom_207C81
gText_Rom_207C81: @ 0x08207C81
	.string "わしが ながねん\nちしきの すべてを かけて\lかしこく そだてた ポケモン！\pわかい やつらの ポケモン なんぞに\nそう やすやすと まけたりは せんぞ！\pばあさん みとるかー！?{EOS}"
	.if (. - gText_Rom_207C81) > 0x5b
	.error "gText_Rom_207C81 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_207C81) < 0x5b
	.space 0x5b - (. - gText_Rom_207C81)
	.endif
