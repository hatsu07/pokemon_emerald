	@ src/strings.c:827 gText_AnnouncingRankings
	.globl gText_AnnouncingRankings
gText_AnnouncingRankings: @ 0x085CCD5A
	.string "じゅんいの はっぴょう!!{EOS}"
	.if (. - gText_AnnouncingRankings) > 0xe
	.error "gText_AnnouncingRankings may not grow beyond its original slot"
	.endif
	.if (. - gText_AnnouncingRankings) < 0xe
	.space 0xe - (. - gText_AnnouncingRankings)
	.endif

	@ src/strings.c:828 gText_AnnouncingPrizes
	.globl gText_AnnouncingPrizes
gText_AnnouncingPrizes: @ 0x085CCD68
	.string "しょうひんの はっぴょう!!{EOS}"
	.if (. - gText_AnnouncingPrizes) > 0xf
	.error "gText_AnnouncingPrizes may not grow beyond its original slot"
	.endif
	.if (. - gText_AnnouncingPrizes) < 0xf
	.space 0xf - (. - gText_AnnouncingPrizes)
	.endif
