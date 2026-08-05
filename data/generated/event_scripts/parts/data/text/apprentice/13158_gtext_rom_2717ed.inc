	@ data/text/apprentice.inc:655 gText_ApprenticeWhichMon13
	.globl gText_Rom_2717ED
gText_Rom_2717ED: @ 0x082717ED
	.string "{PLAYER}{KUN}かぁ\nおれ あたま いたくてさ……\pどの ポケモンに するか\nなやみ すぎちゃったん だよね きっと\lというわけ だからさ\lかわりに きめて くれよ!\p{PLAYER}{KUN}はさ おれの ポケモン\n{STR_VAR_1}と {STR_VAR_2} だったら\lどっちが あってると おもうかい?$"
	.if (. - gText_Rom_2717ED) > 0x7e
	.error "gText_Rom_2717ED may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2717ED) < 0x7e
	.space 0x7e - (. - gText_Rom_2717ED)
	.endif
