	@ data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.inc:563 LilycoveCity_PokemonTrainerFanClub_Text_HeardAboutYouImYourFan
	.globl gText_Rom_208B22
gText_Rom_208B22: @ 0x08208B22
	.string "きいたよ！\nきみ つよいんだってな\pここでは みんな\nだれが いちばん つよい トレーナーか\lはなしを してるんだけど\pおれ きみの うわさを きいて\nきみの ファンに なることに したよ！\pこれからも つよい トレーナーと\nバンバン たたかって\pおれたちに あつい\nたたかいを みせてくれよ！\pそうすれば きっと みんなも\nきみの ことを みなおすと おもうんだ\pじゃあ きたい してるよ！\n{PLAYER}！！{EOS}"
	.if (. - gText_Rom_208B22) > 0xca
	.error "gText_Rom_208B22 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_208B22) < 0xca
	.space 0xca - (. - gText_Rom_208B22)
	.endif
