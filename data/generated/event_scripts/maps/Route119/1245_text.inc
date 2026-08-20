	@ data/maps/Route119/scripts.inc:528 Route119_Text_BrendanExplainFly
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_1ED4CF
gText_Rom_1ED4CF: @ 0x081ED4CF
	.string "ユウキ『そらをとぶを つかえば\nいちど いった まちなら\lいっしゅんで とんでいける\pもっとも ヒワマキの\nジムバッジが ひつよう だけど……\pじゃ オレ さきにいくよ{EOS}"
	.if (. - gText_Rom_1ED4CF) != 0x55
	.error "gText_Rom_1ED4CF must retain its original byte length"
	.endif
