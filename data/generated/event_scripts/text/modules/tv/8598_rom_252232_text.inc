	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+31 aliases)
	.globl gText_Rom_252232
gText_Rom_252232: @ 0x08252232
	.string "『サファリ　だいすき　クラブ！』\pレポーター『サファリボール　なげてますか？\nわたしは　いま　めずらしい　ポケモンが\lいっぱいの　サファリゾーンに　きています\pさっそく　かかりいんさんに\nおはなしを　うかがって　みましょう！\p……サファリに　きている　トレーナーたちの\nようすは　いかがですか？$"
	.if (. - gText_Rom_252232) > 0x94
	.error "gText_Rom_252232 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_252232) < 0x94
	.space 0x94 - (. - gText_Rom_252232)
	.endif
