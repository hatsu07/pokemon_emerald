	@ data/text/match_call.inc:631 MatchCall_Text_Roxanne_RematchReady
	.globl gText_Rom_269F8E
gText_Rom_269F8E: @ 0x08269F8E
	.string "ツツジ『{PLAYER}さん!\nジムの じゅんびが できました!\pいつでも カナズミ シティまで\nきてくださいな!"
	.byte EOS
	.if (. - gText_Rom_269F8E) > 0x34
	.error "gText_Rom_269F8E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_269F8E) < 0x34
	.space 0x34 - (. - gText_Rom_269F8E)
	.endif
