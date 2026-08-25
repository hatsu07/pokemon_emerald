@ Namespaced battle-animation bytecode emitters.
@ These intentionally use the ba_* prefix because event.inc defines
@ conflicting macros such as end, goto, call and return.

	.macro ba_loadspritegfx tag:req
	.byte 0x00
	.2byte \tag
	.endm

	.macro ba_unloadspritegfx tag:req
	.byte 0x01
	.2byte \tag
	.endm

	.macro ba_createsprite template:req, anim_battler:req, subpriority_offset:req, argv:vararg
	.byte 0x02
	.4byte \template
	.ifc \anim_battler,ANIM_TARGET
	.byte 0x80 | (\subpriority_offset & 0x7F)
	.else
	.byte (\subpriority_offset & 0x7F)
	.endif
	.byte (.Lba_sprite_\@_2 - .Lba_sprite_\@_1) / 2
.Lba_sprite_\@_1:
	.2byte \argv
.Lba_sprite_\@_2:
	.endm

	.macro ba_createvisualtask addr:req, priority:req, argv:vararg
	.byte 0x03
	.4byte \addr
	.byte \priority
	.byte (.Lba_vtask_\@_2 - .Lba_vtask_\@_1) / 2
.Lba_vtask_\@_1:
	.2byte \argv
.Lba_vtask_\@_2:
	.endm

	.macro ba_delay value:req
	.byte 0x04
	.byte \value
	.endm

	.macro ba_waitforvisualfinish
	.byte 0x05
	.endm

	.macro ba_hang1
	.byte 0x06
	.endm

	.macro ba_hang2
	.byte 0x07
	.endm

	.macro ba_end
	.byte 0x08
	.endm

	.macro ba_playse se:req
	.byte 0x09
	.2byte \se
	.endm

	.macro ba_monbg battler:req
	.byte 0x0A
	.byte \battler
	.endm

	.macro ba_clearmonbg battler:req
	.byte 0x0B
	.byte \battler
	.endm

	.macro ba_setalpha eva:req, evb:req
	.byte 0x0C
	.2byte ((\evb) << 8) | (\eva)
	.endm

	.macro ba_blendoff
	.byte 0x0D
	.endm

	.macro ba_call ptr:req
	.byte 0x0E
	.4byte \ptr
	.endm

	.macro ba_return
	.byte 0x0F
	.endm

	.macro ba_setarg arg:req, value:req
	.byte 0x10
	.byte \arg
	.2byte \value
	.endm

	.macro ba_choosetwoturnanim ptr0:req, ptr1:req
	.byte 0x11
	.4byte \ptr0
	.4byte \ptr1
	.endm

	.macro ba_jumpifmoveturn turn:req, ptr:req
	.byte 0x12
	.byte \turn
	.4byte \ptr
	.endm

	.macro ba_goto ptr:req
	.byte 0x13
	.4byte \ptr
	.endm

	.macro ba_fadetobg bg:req
	.byte 0x14
	.byte \bg
	.endm

	.macro ba_restorebg
	.byte 0x15
	.endm

	.macro ba_waitbgfadeout
	.byte 0x16
	.endm

	.macro ba_waitbgfadein
	.byte 0x17
	.endm

	.macro ba_changebg bg:req
	.byte 0x18
	.byte \bg
	.endm

	.macro ba_playsewithpan se:req, pan:req
	.byte 0x19
	.2byte \se
	.byte \pan
	.endm

	.macro ba_setpan pan:req
	.byte 0x1A
	.byte \pan
	.endm

	.macro ba_panse_1B se:req, p1:req, p2:req, p3:req, p4:req
	.byte 0x1B
	.2byte \se
	.byte \p1, \p2, \p3, \p4
	.endm

	.macro ba_loopsewithpan se:req, pan:req, wait:req, times:req
	.byte 0x1C
	.2byte \se
	.byte \pan, \wait, \times
	.endm

	.macro ba_waitplaysewithpan se:req, pan:req, wait:req
	.byte 0x1D
	.2byte \se
	.byte \pan, \wait
	.endm

	.macro ba_setbldcnt value:req
	.byte 0x1E
	.2byte \value
	.endm

	.macro ba_createsoundtask addr:req, argv:vararg
	.byte 0x1F
	.4byte \addr
	.byte (.Lba_stask_\@_2 - .Lba_stask_\@_1) / 2
.Lba_stask_\@_1:
	.2byte \argv
.Lba_stask_\@_2:
	.endm

	.macro ba_waitsound
	.byte 0x20
	.endm

	.macro ba_jumpargeq arg:req, value:req, ptr:req
	.byte 0x21
	.byte \arg
	.2byte \value
	.4byte \ptr
	.endm

	.macro ba_monbg_22 battler:req
	.byte 0x22
	.byte \battler
	.endm

	.macro ba_clearmonbg_23 battler:req
	.byte 0x23
	.byte \battler
	.endm

	.macro ba_jumpifcontest ptr:req
	.byte 0x24
	.4byte \ptr
	.endm

	.macro ba_fadetobgfromset p0:req, p1:req, p2:req
	.byte 0x25
	.byte \p0, \p1, \p2
	.endm

	.macro ba_panse_26 se:req, p1:req, p2:req, p3:req, p4:req
	.byte 0x26
	.2byte \se
	.byte \p1, \p2, \p3, \p4
	.endm

	.macro ba_panse_27 se:req, p1:req, p2:req, p3:req, p4:req
	.byte 0x27
	.2byte \se
	.byte \p1, \p2, \p3, \p4
	.endm

	.macro ba_monbgprio_28 battler:req
	.byte 0x28
	.byte \battler
	.endm

	.macro ba_monbgprio_29
	.byte 0x29
	.endm

	.macro ba_monbgprio_2A battler:req
	.byte 0x2A
	.byte \battler
	.endm

	.macro ba_invisible battler:req
	.byte 0x2B
	.byte \battler
	.endm

	.macro ba_visible battler:req
	.byte 0x2C
	.byte \battler
	.endm

	.macro ba_doublebattle_2D battler:req
	.byte 0x2D
	.byte \battler
	.endm

	.macro ba_doublebattle_2E battler:req
	.byte 0x2E
	.byte \battler
	.endm

	.macro ba_stopsound
	.byte 0x2F
	.endm
