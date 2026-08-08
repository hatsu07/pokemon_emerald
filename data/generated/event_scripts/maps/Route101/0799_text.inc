	@ data/maps/Route101/scripts.inc:272 Route101_Text_YouSavedMe
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_1E66F2
gText_Rom_1E66F2: @ 0x081E66F2
	.string "オダマキ『はあ はあ……\pやせいの ポケモンを ちょうさ しようと\nくさむらに はいったら\lとつぜん ポケモンに おそわれて……\pとにかく たすかったよ ありがとう!\p……おや?\pきみは {PLAYER}{KUN} じゃないか!\pこんな ところでは なんだから\nちょっと けんきゅうじょ まで きておくれ$"
	.if (. - gText_Rom_1E66F2) != 0x90
	.error "gText_Rom_1E66F2 must retain its original byte length"
	.endif
