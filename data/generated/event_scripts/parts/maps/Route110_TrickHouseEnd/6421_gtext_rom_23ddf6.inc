	@ data/maps/Route110_TrickHouseEnd/scripts.inc:292 Route110_TrickHouseEnd_Text_NoRoomForThis
	.globl gText_Rom_23DDF6
gText_Rom_23DDF6: @ 0x0823DDF6
	.string "なにっ もちきれない?\nそんなに なにを もちあるいてるんだ?\lまあ せっかく ここまで こられたんだし\lほうびは あとで やろう!"
	.byte EOS
	.if (. - gText_Rom_23DDF6) > 0x43
	.error "gText_Rom_23DDF6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23DDF6) < 0x43
	.space 0x43 - (. - gText_Rom_23DDF6)
	.endif
