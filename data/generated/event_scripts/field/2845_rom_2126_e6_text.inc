	@ field-script:0x212547 FieldScriptText_2126E6
	.globl gText_Rom_2126E6
gText_Rom_2126E6: @ 0x082126E6
	.string "ポケモンが　てんそう　される　ボックスは\nさいごに　みた　ボックスにする\pその　ボックスが　いっぱいの　ときは\nつぎの　ボックスに　てんそう　する\pつまり　ボックスを　みることで\nポケモンを　てんそう　したい　ボックスに\lきりかえられる　ようにする{EOS}"
	.if (. - gText_Rom_2126E6) > 0x7d
	.error "gText_Rom_2126E6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2126E6) < 0x7d
	.space 0x7d - (. - gText_Rom_2126E6)
	.endif
