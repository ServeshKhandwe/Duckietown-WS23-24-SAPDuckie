from typing import Tuple


def DT_TOKEN() -> str:
    # TODO: change this to your duckietown token
    # dt_token = "dt1-3nT7FDbT7NLPrXykNJW6pwkBovEH6ibVT2G4FWC5GPruqvC-43dzqWFnWd8KBa1yev1g3UKnzVxZkkTbfTXrSZ2uzXpRS1VrEPDjScTfphNbDEgaQJ"
    dt_token = 'dt1-3nT7FDbT7NLPrXykNJW6pwvofG1tLmeKivyopjqEJUE2QMa-43dzqWFnWd8KBa1yev1g3UKnzVxZkkTbfQawLEbGUwRxnvMW7bksZevwkoi7n1FdiA'
    return dt_token


def MODEL_NAME() -> str:
    # TODO: change this to your model's name that you used to upload it on google colab.
    # if you didn't change it, it should be "yolov5n"
    return "yolov5n"


def NUMBER_FRAMES_SKIPPED() -> int:
    # TODO: change this number to drop more frames
    # (must be a positive integer)
    return 5


def filter_by_classes(pred_class: int) -> bool:
    """
    Remember the class IDs:

        | Object            | ID    |
        | ---               | ---   |
        | Duckie            | 0     |
        | Duckiebot         | 1     |
        | Traffic light     | 2     |
        | QR code           | 3     |
        | Stop sign         | 4     |
        | Intersection sign | 5     |
        | Signal sign       | 6     |

    Args:
        pred_class: the class of a prediction
    """
    # Right now, this returns True for every object's class
    # TODO: Change this to only return True for duckies!
    # In other words, returning False means that this prediction is ignored.
    return True

def filter_by_classes(pred_class: int) -> bool:
    """
    Remember the class IDs:

        | Object            | ID    |
        | ---               | ---   |
        | Duckie            | 0     |
        | Duckiebot         | 1     |
        | Traffic light     | 2     |
        | QR code           | 3     |
        | Stop sign         | 4     |
        | Intersection sign | 5     |
        | Signal sign       | 6     |


    Args:
        pred_class: the class of a prediction
    """
    return True


def filter_by_scores(score: float) -> bool:
    """
    Args:
        score: the confidence score of a prediction
    """
    # Right now, this returns True for every object's confidence
    # TODO: Change this to filter the scores, or not at all
    # (returning True for all of them might be the right thing to do!)
    return True


def filter_by_bboxes(bbox: Tuple[int, int, int, int]) -> bool:
    """
    Args:
        bbox: is the bounding box of a prediction, in xyxy format
                This means the shape of bbox is (leftmost x pixel, topmost y, rightmost x, bottommost y)
    """
    # TODO: Like in the other cases, return False if the bbox should not be considered.
    return True

# def filter_by_bboxes(bbox: Tuple[int, int, int, int]) -> bool:
#     """
#     Args:
#         bbox: is the bounding box of a prediction, in xyxy format
#                 This means the shape of bbox is (leftmost x pixel, topmost y, rightmost x, bottommost y)
#     """
#     width = bbox[2] - bbox[0]
#     height = bbox[3] - bbox[1]
#     if width < 20 or height < 20:
#         return False
#     else:
#         return True

