	@ data/maps/LilycoveCity_House1/scripts.inc:18 LilycoveCity_House1_Text_PokemonPartnersNotTools
	.globl gText_Rom_209F83
gText_Rom_209F83: @ 0x08209F83
	.string "ポケモンは にんげんの パートナーであって\nけっして にんげんの どうぐ じゃないよ\pそこを かんちがい しておる\nにんげんも たまに いるんだよ……{EOS}"
	.if (. - gText_Rom_209F83) > 0x4c
	.error "gText_Rom_209F83 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_209F83) < 0x4c
	.space 0x4c - (. - gText_Rom_209F83)
	.endif
