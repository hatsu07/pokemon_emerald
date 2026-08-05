	@ data/text/match_call.inc:838 MatchCall_Text_Wally7
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_26B978
gText_Rom_26B978: @ 0x0826B978
	.string "ミツル『あっ {PLAYER}さん!\pいままで ほとんど いえから\nでたことの ない ぼくが\pこうして ポケモンと いっしょに\nぼうけんを している なんて……\p{PLAYER}さん…… ありがとう"
	.byte EOS
	.if (. - gText_Rom_26B978) != 0x58
	.error "gText_Rom_26B978 must retain its original byte length"
	.endif
