	@ src/strings.c:279 gText_12PoofForgotMove
	.globl gText_Rom_5C9E35
gText_Rom_5C9E35: @ 0x085C9E35
	.string "1 {PAUSE 15}2の {PAUSE 15}…{PAUSE 15}…{PAUSE 15}… {PAUSE 15}{PLAY_SE SE_BALL_BOUNCE_1}ポカン!\p{STR_VAR_1}は {STR_VAR_2}の\nつかいかたを きれいに わすれた!\pそして……!{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5C9E35) > 0x44
	.error "gText_Rom_5C9E35 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9E35) < 0x44
	.space 0x44 - (. - gText_Rom_5C9E35)
	.endif
