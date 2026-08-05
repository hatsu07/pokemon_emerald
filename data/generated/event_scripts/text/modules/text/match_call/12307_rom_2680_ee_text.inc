	@ data/text/match_call.inc:361 MatchCall_PersonalizedText50
	.globl gText_Rom_2680EE
gText_Rom_2680EE: @ 0x082680EE
	.string "{STR_VAR_1} だよ\nどう? ポケモン ふえた?\pあたらしい ポケモン つかまえたら\nまた みせに きてくれよ\pちょうだいって いわないからさ\nまってるよ じゃあね$"
	.if (. - gText_Rom_2680EE) > 0x4e
	.error "gText_Rom_2680EE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2680EE) < 0x4e
	.space 0x4e - (. - gText_Rom_2680EE)
	.endif
