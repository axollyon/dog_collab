#include "src/game/envfx_snow.h"

const GeoLayout sl_area_1_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_SWITCH_CASE(3, geo_switch_area),
		GEO_OPEN_NODE(),
			GEO_BRANCH(1, sl_dl_Room_2___Outdoors_geo),
			GEO_BRANCH(1, sl_dl_Room_3___House_1_geo),
		GEO_CLOSE_NODE(),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_TRANSPARENT, 0, -1500, 0, sl_dl_1_Water_Bottom_Visual_Down_mesh_layer_5),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_TRANSPARENT, 20438, -6250, -12262, sl_dl_2_Lighthouse_Inside_Glass_mesh_layer_5),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 20438, -2000, -12262, sl_dl_Lighthouse_mesh_layer_1),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_TRANSPARENT, sl_dl_Lighthouse_mesh_layer_5),
		GEO_CLOSE_NODE(),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 20437, 2267, -12262, sl_dl_Lighthouse_Foundation_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 0, 4000, 0, sl_dl_Terrain_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_TRANSPARENT, 0, -1500, 0, sl_dl_Z_Water_Bottom_Visual_Up_mesh_layer_5),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout sl_dl_Room_2___Outdoors_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 0, -2500, 0, sl_dl_Board_Rounds_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 0, -2500, 0, sl_dl_Boards_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 1200, -2500, 2500, sl_dl_House_1_Outdoors_Visual_mesh_layer_1),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_ALPHA, sl_dl_House_1_Outdoors_Visual_mesh_layer_4),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout sl_dl_Room_3___House_1_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_TRANSLATE_NODE(LAYER_OPAQUE, 1200, -2500, 2500),
		GEO_OPEN_NODE(),
			GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -328, 0, -636, 0, -180, 0, sl_dl_Fishing_Rod_mesh_layer_1),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_ALPHA, sl_dl_Fishing_Rod_mesh_layer_4),
				GEO_BILLBOARD_WITH_PARAMS(LAYER_OPAQUE, 0, 40, 62),
				GEO_OPEN_NODE(),
					GEO_ROTATION_NODE(LAYER_OPAQUE, 0, -180, 0),
					GEO_OPEN_NODE(),
						GEO_DISPLAY_LIST(LAYER_ALPHA, sl_dl_Fishing_Rod_Bobber_mesh_layer_4),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -228, 0, -636, 0, -180, 0, sl_dl_Fishing_Rod_001_mesh_layer_1),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_ALPHA, sl_dl_Fishing_Rod_001_mesh_layer_4),
				GEO_BILLBOARD_WITH_PARAMS(LAYER_OPAQUE, 0, 40, 62),
				GEO_OPEN_NODE(),
					GEO_ROTATION_NODE(LAYER_OPAQUE, 0, -180, 0),
					GEO_OPEN_NODE(),
						GEO_DISPLAY_LIST(LAYER_ALPHA, sl_dl_Fishing_Rod_Bobber_001_mesh_layer_4),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -128, 0, -636, 0, -180, 0, sl_dl_Fishing_Rod_002_mesh_layer_1),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_ALPHA, sl_dl_Fishing_Rod_002_mesh_layer_4),
				GEO_BILLBOARD_WITH_PARAMS(LAYER_OPAQUE, 0, 40, 62),
				GEO_OPEN_NODE(),
					GEO_ROTATION_NODE(LAYER_OPAQUE, 0, -180, 0),
					GEO_OPEN_NODE(),
						GEO_DISPLAY_LIST(LAYER_ALPHA, sl_dl_Fishing_Rod_Bobber_002_mesh_layer_4),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -28, 0, -636, 0, -180, 0, sl_dl_Fishing_Rod_003_mesh_layer_1),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_ALPHA, sl_dl_Fishing_Rod_003_mesh_layer_4),
				GEO_BILLBOARD_WITH_PARAMS(LAYER_OPAQUE, 0, 40, 62),
				GEO_OPEN_NODE(),
					GEO_ROTATION_NODE(LAYER_OPAQUE, 0, -180, 0),
					GEO_OPEN_NODE(),
						GEO_DISPLAY_LIST(LAYER_ALPHA, sl_dl_Fishing_Rod_Bobber_003_mesh_layer_4),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
			GEO_DISPLAY_LIST(LAYER_TRANSPARENT_INTER, sl_dl_House_1_Indoors_Visual_mesh_layer_7),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, sl_dl_House_1_Indoors_Visual_mesh_layer_1),
			GEO_DISPLAY_LIST(LAYER_ALPHA, sl_dl_House_1_Indoors_Visual_mesh_layer_4),
			GEO_TRANSLATE_NODE_WITH_DL(LAYER_ALPHA, 550, 325, 0, sl_dl_Ship_Wheel_mesh_layer_4),
			GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 85, 0, 477, 0, 68, 0),
			GEO_OPEN_NODE(),
				GEO_ROTATION_NODE_WITH_DL(LAYER_OPAQUE, 0, -180, 0, sl_dl_Stool_Visual_003_mesh_layer_1),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, -285, 0, 323, 0, 68, 0),
			GEO_OPEN_NODE(),
				GEO_ROTATION_NODE_WITH_DL(LAYER_OPAQUE, 0, -60, 0, sl_dl_Stool_Visual_002_mesh_layer_1),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_NODE(LAYER_OPAQUE, 300, 0, -500),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, sl_dl_Stool_Visual_mesh_layer_1),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_NODE(LAYER_OPAQUE, 300, 0, -100),
			GEO_OPEN_NODE(),
				GEO_ROTATION_NODE_WITH_DL(LAYER_OPAQUE, 0, 120, 0, sl_dl_Stool_Visual_001_mesh_layer_1),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, -100, 0, 400, 0, 68, 0),
			GEO_OPEN_NODE(),
				GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 0, 100, 92, sl_dl_Maps_mesh_layer_1),
				GEO_DISPLAY_LIST(LAYER_ALPHA, sl_dl_Table_Visual_001_mesh_layer_4),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, sl_dl_Table_Visual_001_mesh_layer_1),
				GEO_DISPLAY_LIST(LAYER_TRANSPARENT_DECAL, sl_dl_Table_Visual_001_mesh_layer_6),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_NODE(LAYER_OPAQUE, 300, 0, -300),
			GEO_OPEN_NODE(),
				GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 0, 100, 0, sl_dl_Cards_mesh_layer_1),
				GEO_DISPLAY_LIST(LAYER_ALPHA, sl_dl_Table_Visual_mesh_layer_4),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, sl_dl_Table_Visual_mesh_layer_1),
				GEO_DISPLAY_LIST(LAYER_TRANSPARENT_DECAL, sl_dl_Table_Visual_mesh_layer_6),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout sl_area_1[] = {
	GEO_NODE_SCREEN_AREA(10, SCREEN_WIDTH/2, SCREEN_HEIGHT/2, SCREEN_WIDTH/2, SCREEN_HEIGHT/2),
	GEO_OPEN_NODE(),
		GEO_ZBUFFER(0),
		GEO_OPEN_NODE(),
			GEO_NODE_ORTHO(100.0000),
			GEO_OPEN_NODE(),
				GEO_BACKGROUND_COLOR(0x631F),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_ZBUFFER(1),
		GEO_OPEN_NODE(),
			GEO_CAMERA_FRUSTUM_WITH_FUNC(45.0000, 218, 65535, geo_camera_fov),
			GEO_OPEN_NODE(),
				GEO_CAMERA(CAMERA_MODE_8_DIRECTIONS, 0, 0, 0, 0, -100, 0, geo_camera_main),
				GEO_OPEN_NODE(),
					GEO_BRANCH(1, sl_area_1_geo),
					GEO_RENDER_OBJ(),
					GEO_ASM(ENVFX_MODE_NONE, geo_envfx_main),
                    GEO_ASM(0, geo_clouds_move),
                    GEO_TRANSLATE_NODE_WITH_DL(LAYER_FORCE, 0, 0, 0, sl_clouds_Clouds_mesh),
                    GEO_ASM(0, geo_zbuffer_clear),
                    GEO_ASM(0, geo_sl_backdrop_fog),
                    GEO_ASM(0, geo_backdrop_move),
                    GEO_TRANSLATE_NODE_WITH_DL(LAYER_FORCE, 0, 0, 0, sl_backdrop_Backdrop_mesh),
                    GEO_ASM(0, geo_zbuffer_clear),
                    GEO_ASM(0, geo_backdrop_move),
                    GEO_TRANSLATE_NODE_WITH_DL(LAYER_FORCE, 0, 0, 0, sl_backdrop_water_Backdrop_Water_mesh),
                    GEO_ASM(0, geo_zbuffer_clear),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, sl_dl_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_ALPHA, sl_dl_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, sl_dl_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT_DECAL, sl_dl_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT_INTER, sl_dl_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
