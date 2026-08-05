	@ src/data/credits.h:80 sCreditsText_SoundEffectsAndPkmnVoices
	.globl gText_Rom_5C6D53
gText_Rom_5C6D53: @ 0x085C6D53
	.string "サウンド エフェクト/ポケモン ボイス$"
	.if (. - gText_Rom_5C6D53) > 0x14
	.error "gText_Rom_5C6D53 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6D53) < 0x14
	.space 0x14 - (. - gText_Rom_5C6D53)
	.endif
