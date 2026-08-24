	@ src/strings.c:168 gText_PlayerUsedVar2
	.globl gText_PlayerUsedVar2
gText_PlayerUsedVar2: @ 0x085C9644
	.string "{PLAYER}は\n{STR_VAR_2}を つかった!{PAUSE_UNTIL_PRESS}{EOS}"
	.if (. - gText_PlayerUsedVar2) > 0x10
	.error "gText_PlayerUsedVar2 may not grow beyond its original slot"
	.endif
	.if (. - gText_PlayerUsedVar2) < 0x10
	.space 0x10 - (. - gText_PlayerUsedVar2)
	.endif

	@ src/strings.c:169 gText_RepelEffectsLingered
	.globl gText_RepelEffectsLingered
gText_RepelEffectsLingered: @ 0x085C9654
	.string "まだ まえに つかった スプレーの\nこうかが のこってます!{PAUSE_UNTIL_PRESS}{EOS}"
	.if (. - gText_RepelEffectsLingered) > 0x21
	.error "gText_RepelEffectsLingered may not grow beyond its original slot"
	.endif
	.if (. - gText_RepelEffectsLingered) < 0x21
	.space 0x21 - (. - gText_RepelEffectsLingered)
	.endif
