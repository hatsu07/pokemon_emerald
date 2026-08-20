	@ data/maps/LavaridgeTown/scripts.inc:276 LavaridgeTown_Text_MayNiceBadgesTakeThis
	.globl gText_Rom_1E594F
gText_Rom_1E594F: @ 0x081E594F
	.string "ハルカ『{PLAYER}{KUN}! ひさしぶり!\pあら? あたしが おんせんに\nはいったり してる あいだに\lフエンの ジムバッジ てに いれたんだ!\pかなり ポケモン あつめてる っていうか\nそだてて いるんだね!\pじゃあ これを あげても\nだいじょうぶ だよね{EOS}"
	.if (. - gText_Rom_1E594F) > 0x7d
	.error "gText_Rom_1E594F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E594F) < 0x7d
	.space 0x7d - (. - gText_Rom_1E594F)
	.endif
