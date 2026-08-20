	@ data/maps/RusturfTunnel/scripts.inc:439 RusturfTunnel_Text_ThankYouLetsGoHomePeeko
	.globl gText_Rom_213A9E
gText_Rom_213A9E: @ 0x08213A9E
	.string "あんたは ピーコちゃんの\nいのちの おんじん じゃよ!\pわしは ハギと いうのじゃが\nきみは……?\p…… …… ……\n…… …… ……\pそうか {PLAYER}{KUN}と いうのか!\nほんとうに ありがとうよ!\pこれからさき こまった ことが あったら\nえんりょなく わしに いっとくれ!\pいつもは トウカのもりの ちかくに ある\nはまべの こやに いるからの!\pさあ ピーコちゃん\nわしらの おうちに かえろうな!\pピーコちゃん『ピひょーっ!!{EOS}"
	.if (. - gText_Rom_213A9E) > 0xd8
	.error "gText_Rom_213A9E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_213A9E) < 0xd8
	.space 0xd8 - (. - gText_Rom_213A9E)
	.endif
