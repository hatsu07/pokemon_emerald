	@ data/maps/CaveOfOrigin_B1F/scripts.inc:62 CaveOfOrigin_B1F_Text_WallaceStory
	.globl gText_Rom_2191C4
gText_Rom_2191C4: @ 0x082191C4
	.string "そうか きみが {PLAYER}{KUN}……\nきみの かつやくは きいているよ\pわたしの なまえは ミクリ\nルネの ジムリーダーを していたけれど\lちょっと わけが あってね\pいまは ししょうの アダンさんに\nジムのことは おまかせして いるのさ\p…… …… ……\n…… …… ……\pいま このまちで あばれている\nグラードンと カイオーガは\lちょうこだい ポケモンと いわれている\pけれど ちょうこだい ポケモンは\nあの2ひき だけじゃ なかった……\lどこかに もう1ひき\pそう…… レックウザと よばれる\nちょうこだい ポケモンが いるんだよ\pとおい むかしに\nあの2ひきの たたかいを しずめたのも\lレックウザ だと いわれている\pだが レックウザが どこに いるかは\nわたしにも わからない……{EOS}"
	.if (. - gText_Rom_2191C4) > 0x158
	.error "gText_Rom_2191C4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2191C4) < 0x158
	.space 0x158 - (. - gText_Rom_2191C4)
	.endif
