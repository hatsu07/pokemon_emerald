	@ data/text/move_tutors.inc:208 MoveTutor_Text_ExplosionTeach
	.globl gText_Rom_27671B
gText_Rom_27671B: @ 0x0827671B
	.string "ぼかぁ こんな イナカで\nいつまでも くすぶっとる つもりは\lまったく ないんじゃあー!\pみとれよ いつか トカイに でて\nドッカーンと はでに やって やるわい!\pおいっ! おまえ きいとったん なら\nけいきよく だいばくはつを おしえさせろ!{EOS}"
	.if (. - gText_Rom_27671B) > 0x7c
	.error "gText_Rom_27671B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_27671B) < 0x7c
	.space 0x7c - (. - gText_Rom_27671B)
	.endif
