	@ data/text/apprentice.inc:619 gText_ApprenticeWhichMon7
	.globl gText_Rom_2712F5
gText_Rom_2712F5: @ 0x082712F5
	.string "まあ {PLAYER}さんでは?\nごきげんよう……!\pあなたに でしいり して わたくし\nすこし じしんが ついて まいりました!\lポケモンを さっそく そだてたいと\lおもって おりますの!\pそれでね {PLAYER}さんに\nわたしの ポケモンを\lきめていただく わけには まいりませんか?\p{STR_VAR_1}と {STR_VAR_2}……\nどちらの ポケモンが よろしいでしょう?$"
	.if (. - gText_Rom_2712F5) > 0xa4
	.error "gText_Rom_2712F5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2712F5) < 0xa4
	.space 0xa4 - (. - gText_Rom_2712F5)
	.endif
