	@ data/text/match_call.inc:643 MatchCall_Text_Brawly_RematchReady
	.globl gText_Rom_26A11E
gText_Rom_26A11E: @ 0x0826A11E
	.string "トウキ『{PLAYER}{KUN}!\nジムの じゅんびが できたよ!\pいつでも ムロ タウンまで\nちょうせんしに きてくれよな!"
	.byte EOS
	.if (. - gText_Rom_26A11E) > 0x38
	.error "gText_Rom_26A11E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26A11E) < 0x38
	.space 0x38 - (. - gText_Rom_26A11E)
	.endif
