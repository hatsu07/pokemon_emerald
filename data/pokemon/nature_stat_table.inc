@ Nature stat modifiers
@ Columns: Attack, Defense, Speed, Sp. Attack, Sp. Defense
@ 1 increases the stat by 10%, -1 decreases it by 10%, and 0 leaves it unchanged.

	.globl gNatureStatTable
gNatureStatTable: @ 0x082EF1A0
	@ ANALYSIS: SEMANTIC_NUMERIC_NATURE_STAT_TABLE
	.byte  0,  0,  0,  0,  0 @ Hardy  / がんばりや
	.byte  1, -1,  0,  0,  0 @ Lonely / さみしがり
	.byte  1,  0, -1,  0,  0 @ Brave  / ゆうかん
	.byte  1,  0,  0, -1,  0 @ Adamant / いじっぱり
	.byte  1,  0,  0,  0, -1 @ Naughty / やんちゃ
	.byte -1,  1,  0,  0,  0 @ Bold   / ずぶとい
	.byte  0,  0,  0,  0,  0 @ Docile / すなお
	.byte  0,  1, -1,  0,  0 @ Relaxed / のんき
	.byte  0,  1,  0, -1,  0 @ Impish / わんぱく
	.byte  0,  1,  0,  0, -1 @ Lax    / のうてんき
	.byte -1,  0,  1,  0,  0 @ Timid  / おくびょう
	.byte  0, -1,  1,  0,  0 @ Hasty  / せっかち
	.byte  0,  0,  0,  0,  0 @ Serious / まじめ
	.byte  0,  0,  1, -1,  0 @ Jolly  / ようき
	.byte  0,  0,  1,  0, -1 @ Naive  / むじゃき
	.byte -1,  0,  0,  1,  0 @ Modest / ひかえめ
	.byte  0, -1,  0,  1,  0 @ Mild   / おっとり
	.byte  0,  0, -1,  1,  0 @ Quiet  / れいせい
	.byte  0,  0,  0,  0,  0 @ Bashful / てれや
	.byte  0,  0,  0,  1, -1 @ Rash   / うっかりや
	.byte -1,  0,  0,  0,  1 @ Calm   / おだやか
	.byte  0, -1,  0,  0,  1 @ Gentle / おとなしい
	.byte  0,  0, -1,  0,  1 @ Sassy  / なまいき
	.byte  0,  0,  0, -1,  1 @ Careful / しんちょう
	.byte  0,  0,  0,  0,  0 @ Quirky / きまぐれ
	.balign 4, 0
