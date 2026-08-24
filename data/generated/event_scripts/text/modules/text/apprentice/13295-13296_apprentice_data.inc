
	@ data/text/apprentice.inc:863 gText_ApprenticeWinSpeechThanks15
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_ApprenticeWinSpeechThanks15
gText_ApprenticeWinSpeechThanks15: @ 0x0827389D
	.string "{STR_VAR_1}\p…… …… ……\nしょうぶに かったら\p{STR_VAR_1}\p…… ほんき なのかね?\pいや ほんき なら いいんだ!\nどうも ありがとう\lこんな わたしでも いつか\lつかえる ときが くれば いいな\pでは そろそろ\nほしい じょげんも なくなってきた\l{PLAYER}{KUN}とは おわかれして\lひとりで がんばって みようかと おもう\pでは ありがとう!\nうたがって すまなかった!{EOS}"
	.if (. - gText_ApprenticeWinSpeechThanks15) != 0xb5
	.error "gText_ApprenticeWinSpeechThanks15 must retain its original byte length"
	.endif
