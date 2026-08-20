	@ data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.inc:68 LilycoveCity_CoveLilyMotel_2F_Text_ShowMeCompletedDex
	.globl gText_Rom_205929
gText_Rom_205929: @ 0x08205929
	.string "ぼくは ゲーム デザイナー\pへー\nポケモンずかん あつめてるの?\pぜんぶ あつめるの\nたいへん だけど がんばって!\pもし ぜんぶ あつめたら おしえてよ!{EOS}"
	.if (. - gText_Rom_205929) > 0x4f
	.error "gText_Rom_205929 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_205929) < 0x4f
	.space 0x4f - (. - gText_Rom_205929)
	.endif
