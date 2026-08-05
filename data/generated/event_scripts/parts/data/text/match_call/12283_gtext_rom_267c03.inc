	@ data/text/match_call.inc:325 MatchCall_PersonalizedText38
	.globl gText_Rom_267C03
gText_Rom_267C03: @ 0x08267C03
	.string "ああ {STR_VAR_1} です\nあれから だいぶ およいだけど\lサイユウシティには まだ つかないのかなあ\pもしかして おなじ ところを\nぐるぐる まわってるだけ だったりして\pいや まさか そんなこと ないよな\nわはははは\lじゃあ また!$"
	.if (. - gText_Rom_267C03) > 0x72
	.error "gText_Rom_267C03 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_267C03) < 0x72
	.space 0x72 - (. - gText_Rom_267C03)
	.endif
