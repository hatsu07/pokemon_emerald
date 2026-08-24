	@ src/data/credits.h:79 sCreditsText_MusicComposition (+1 aliases)
	.globl sCreditsText_MusicComposition_Copy_Credits
sCreditsText_MusicComposition_Copy_Credits: @ 0x085778E1
	.string "おんがく{EOS}"
	.if (. - sCreditsText_MusicComposition_Copy_Credits) > 0x5
	.error "sCreditsText_MusicComposition_Copy_Credits may not grow beyond its original slot"
	.endif
	.if (. - sCreditsText_MusicComposition_Copy_Credits) < 0x5
	.space 0x5 - (. - sCreditsText_MusicComposition_Copy_Credits)
	.endif
