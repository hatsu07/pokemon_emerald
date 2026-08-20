	@ data/maps/Route110/scripts.inc:968 Route110_Text_HeardYouInstallMatchCall
	.globl gText_Rom_1EA057
gText_Rom_1EA057: @ 0x081EA057
	.string "そうか!\nきみたちは べつこうどう なんだね\pまあ それは いいとして……\nそうそう! きみの ポケナビに\lエントリーコールが セットされたって?\pならば わたしも とうろく しておこう!\pそうすれば きみと はなれていても\nいつでも ポケモンずかんの ひょうかを\lしてあげられる からね!\p…… …… ……{EOS}"
	.if (. - gText_Rom_1EA057) > 0x9b
	.error "gText_Rom_1EA057 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EA057) < 0x9b
	.space 0x9b - (. - gText_Rom_1EA057)
	.endif
